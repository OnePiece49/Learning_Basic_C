                    /*********************** ENUM TRONG C ***********************\

    +, Enum được sử dụng để lưu các giá trị hằng số.
    +, Khai báo:
        typedef enum  {
            GET = 0,
            POST = 1,
            PUSH = 2,
        }method;
    
    --> Lúc này: GET được define là 0,...
        --> Nó tương tự 1 chuỗi lệnh define:
            #define GET 0
            #define POST 1
            ...
        
        --> Nên các biến GET, POST, PUSH được sử dụng như các biến toàn cục luôn.
    
    +, Với function như này:
        void hello(method abc) {
            printf("Value method %d \n", abc);
        }
    --> Ta có thể truyền thẳng các biến GET, POST, PUSH vào luôn    
            or truyền qua 1 biến trung gian như này:
            int main()
            {
                method helloworld = GET;
                hello(helloworld);
                hello(POST);
            }