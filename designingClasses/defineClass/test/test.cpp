#include <gtest/gtest.h>

// Headers of objects that student should implement:
class MusicalInstrument{
public:
    std::string type;
    std::string getType();
};


// Tests:
TEST(violinTest, defineClass) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated clas
    MusicalInstrument violin = MusicalInstrument();
    violin.type = "violin";
    ASSERT_EQ(violin.getType(), "violin");
}