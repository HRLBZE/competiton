//#include <stdio.h>
//#include <sys/types.h>
//#include <dirent.h>
//#include <sys/stat.h>
//#include <unistd.h>
//#include <fcntl.h>
////�����ļ�
//int copy_file(char* path1, char* path2)
//{
//    int fd1 = open(path1, O_RDONLY);                      //���Ѵ��ڵ��ļ�
//    if (fd1 < 0) { perror("fd1"); return -1; }
//    int fd2 = open(path2, O_RDWR | O_CREAT | O_TRUNC);       //�½����ļ�
//    if (fd2 < 0) { perror("fd2"); return -1; }
//    while (1)                              //����,ϵͳIO�Ŀ��������ݶ�ȡ���ֽ���д��  
//    {
//        char buf[1024] = { 0 };
//        int size = read(fd1, buf, 1024);
//        if (size <= 0)break;
//        write(fd2, buf, size);
//    }
//    close(fd1); close(fd2);
//    return 0;
//}
////����Ŀ¼
//void copy_dir(char* dir1, char* dir2)
//{
//    DIR* dp = opendir(dir1);
//    mkdir(dir2, 0777);
//    char path1[1024] = { 0 }, path2[1024] = { 0 };	//ƴ��·��
//    readdir(dp); readdir(dp); //���� .. �� .
//    while (1)
//    {
//        struct dirent* msg = readdir(dp);
//        if (msg == NULL)break;
//        if (msg->d_type == 4) //Ŀ¼ DT_DIR
//        {
//            printf("%s��Ŀ¼\n", msg->d_name);
//            char path1[1024], path2[1024];
//            sprintf(path1, "%s/%s", dir1, msg->d_name);
//            sprintf(path2, "%s/%s", dir2, msg->d_name);
//            copy_dir(path1, path2);		//�ݹ�Ŀ¼
//            continue;
//        }
//        //��Ŀ¼
//        sprintf(path1, "%s/%s", dir1, msg->d_name); //ƴ��·��
//        sprintf(path2, "%s/%s", dir2, msg->d_name);
//        if (copy_file(path1, path2) == 0)
//            printf("%s ������ %s �ɹ�\n", path1, path2);
//    }
//}
//
////���� ԭĿ¼ ��Ŀ¼
//int main(int argc, char* argv[])
//{
//    if (argc != 3)
//    {
//        puts("��������");
//        return -1;
//    }
//    copy_dir(argv[1], argv[2]);
//}