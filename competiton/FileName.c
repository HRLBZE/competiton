//#include <stdio.h>
//#include <sys/types.h>
//#include <dirent.h>
//#include <sys/stat.h>
//#include <unistd.h>
//#include <fcntl.h>
////拷贝文件
//int copy_file(char* path1, char* path2)
//{
//    int fd1 = open(path1, O_RDONLY);                      //打开已存在的文件
//    if (fd1 < 0) { perror("fd1"); return -1; }
//    int fd2 = open(path2, O_RDWR | O_CREAT | O_TRUNC);       //新建新文件
//    if (fd2 < 0) { perror("fd2"); return -1; }
//    while (1)                              //拷贝,系统IO的拷贝，根据读取的字节数写入  
//    {
//        char buf[1024] = { 0 };
//        int size = read(fd1, buf, 1024);
//        if (size <= 0)break;
//        write(fd2, buf, size);
//    }
//    close(fd1); close(fd2);
//    return 0;
//}
////拷贝目录
//void copy_dir(char* dir1, char* dir2)
//{
//    DIR* dp = opendir(dir1);
//    mkdir(dir2, 0777);
//    char path1[1024] = { 0 }, path2[1024] = { 0 };	//拼接路径
//    readdir(dp); readdir(dp); //跳过 .. 与 .
//    while (1)
//    {
//        struct dirent* msg = readdir(dp);
//        if (msg == NULL)break;
//        if (msg->d_type == 4) //目录 DT_DIR
//        {
//            printf("%s是目录\n", msg->d_name);
//            char path1[1024], path2[1024];
//            sprintf(path1, "%s/%s", dir1, msg->d_name);
//            sprintf(path2, "%s/%s", dir2, msg->d_name);
//            copy_dir(path1, path2);		//递归目录
//            continue;
//        }
//        //非目录
//        sprintf(path1, "%s/%s", dir1, msg->d_name); //拼接路径
//        sprintf(path2, "%s/%s", dir2, msg->d_name);
//        if (copy_file(path1, path2) == 0)
//            printf("%s 拷贝到 %s 成功\n", path1, path2);
//    }
//}
//
////拷贝 原目录 新目录
//int main(int argc, char* argv[])
//{
//    if (argc != 3)
//    {
//        puts("参数错误");
//        return -1;
//    }
//    copy_dir(argv[1], argv[2]);
//}