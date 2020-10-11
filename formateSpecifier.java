public class formateSpecifier {
    
        public static void main(String[] args) {
            
            int num = 10;
            char name ='N';
            float f = 10.4f;
            double d = 3.341;
            short s = 145;
            boolean B = true;
            System.out.printf("Number = %d\n",num);
            System.out.printf("Char = %c\n",name);
            System.out.printf("Float = %.1f\n",f);
            System.out.printf("Double = %.2f\n",d);
            System.out.printf("Short = %d\n",s);
            System.out.printf("Boolean = %b\n",B);
        }
    }
