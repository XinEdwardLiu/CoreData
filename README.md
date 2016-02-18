coredata 看完书觉得它是一种方法可以实现数据的本地存取；
一种方式，可以直观的建立实例对象以及其属性，还能建立对象之间的联系。通过绑定实现数据的读取绑定等。
一种数据模型框架，支持使用数据库进行持久性储存。使用关系把数据组织进实体结构。

，应用程序先创建或读取模型文件（后缀为xcdatamodeld）生成 NSManagedObjectModel 对象。Document应用程序是一般是通过 NSDocument 或其子类 NSPersistentDocument）从模型文件（后缀为 xcdatamodeld）读取。
2，然后生成 NSManagedObjectContext 和 NSPersistentStoreCoordinator 对象，前者对用户透明地调用后者对数据文件进行读写。
3，NSPersistentStoreCoordinator 负责从数据文件(xml, sqlite,二进制文件等)中读取数据生成 Managed Object，或保存 Managed Object 写入数据文件。
4，NSManagedObjectContext 参与对数据进行各种操作的整个过程，它持有 Managed Object。我们通过它来监测 Managed Object。监测数据对象有两个作用：支持 undo/redo 以及数据绑定。这个类是最常被用到的。
5，Array Controller, Object Controller, Tree Controller 这些控制器一般与 NSManagedObjectContext 关联，因此我们可以通过它们在 nib 中可视化地操作数据对象。


软件功能：
在相关表格中填写正确的内容，包括作者，章节，书籍。
在程序退出中，填写的内容将保存到本地数据库文件中。