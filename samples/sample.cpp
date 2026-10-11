#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Macro Definition
#define BUFFER_SIZE 1024
#define LOG_INFO(msg) std::cout << "[INFO] " << msg << std::endl

// Global Variable
int g_globalCounter = 0;
const double PI = 3.141592653589793;

namespace Graphics {

// Enum Definition
enum class RenderMode {
    Wireframe,
    Shaded,
    RayTraced
};

// Struct Definition
struct Point3D {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};

// Interface / Abstract Base Class
class IRenderable {
public:
    virtual ~IRenderable() = default;
    virtual void render(RenderMode mode) const = 0;
};

// Derived Class
class Mesh : public IRenderable {
public:
    // Static Member Variable
    static int s_meshCount;

    // Constructor
    explicit Mesh(std::string name)
        : m_name(std::move(name)), m_visible(true) {
        ++s_meshCount;
    }

    // Destructor
    ~Mesh() override {
        --s_meshCount;
    }

    // Virtual Method Override
    void render(RenderMode mode) const override {
        if (!m_visible) return;
        LOG_INFO("Rendering " << m_name << " in mode: " << static_cast<int>(mode));
    }

    // Static Method
    static int getMeshCount() {
        return s_meshCount;
    }

    // Const Member Method
    const std::string& getName() const {
        return m_name;
    }

    // Deprecated Method
    [[deprecated("Use render(RenderMode) instead")]]
    void drawLegacy() {
        render(RenderMode::Wireframe);
    }

private:
    std::string m_name;       // Member variable (property)
    bool m_visible;           // Member variable (property)
    std::vector<Point3D> m_vertices;
};

// Static Member Initialization
int Mesh::s_meshCount = 0;

// Template Function
template <typename T>
void printDetails(const T& item) {
    std::cout << "Details: " << item << std::endl;
}

} // namespace Graphics

int main(int argc, char* argv[]) {
    using namespace Graphics;

    // Local Variables
    int localExitCode = 0;
    std::string meshName = "HeroCharacter";

    // Pointer and Smart Pointer
    auto heroMesh = std::make_unique<Mesh>(meshName);
    
    // Member function calls
    heroMesh->render(RenderMode::Shaded);

    std::cout << "Total meshes: " << Mesh::getMeshCount() << std::endl;
    std::cout << "Global counter: " << g_globalCounter << std::endl;

    return localExitCode;
}
