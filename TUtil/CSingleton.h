#ifndef CSINGLETON
#define CSINGLETON
namespace Taiji
{

namespace TUtil {

/*
 * @Param: index  使用 index 可以对同一个类生成不同的单实例
 *
 * @eg: CSingleton<MyClass,0>  CSingleton<MyClass, 1>
 */
template<typename T, int index = 0>
class CSingleton
{
public:
    CSingleton() = delete;
    CSingleton(const CSingleton &) = delete;
    CSingleton & operator =(const CSingleton &) = delete;
    static T& instance()
    {
        static T x;
        return x;
    }
};


}
}

#endif // CSINGLETON

