import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.List;
public class CharParser {

    public static void main(String args[]) {
        String filePath = "/Users/chris/Desktop/Chris/SMU/Y2S1/CS201/grp proj/codes/plagiarism-dataset/src/A2017/Z1/Z4";
        String csvOutput = "A2017Z4data.csv";
        try {
            filesToCsv(filePath, csvOutput);
        } catch (Exception e){
            System.out.println("CharParser.main()");
        }


    }

    public static void filesToCsv(String filePath, String csvOutput) throws IOException {//Creating a File object for directory
        File directoryPath = new File(filePath);
        //List of all files and directories
        File filesList[] = directoryPath.listFiles();
        List <List<String>> rowData = new ArrayList<>();

        FileWriter csvWriter = new FileWriter(csvOutput);
        csvWriter.append("Name");
        csvWriter.append(",");
        csvWriter.append("CharCount");
        csvWriter.append("\n");

        System.out.println("Building csv...");
        for(File file : filesList) {
            String fileName = file.getName();
            Scanner sc = null;
            //Instantiating the Scanner class
            sc= new Scanner(file);
            String input;
            StringBuffer sb = new StringBuffer();
            while (sc.hasNextLine()) {
                input = sc.nextLine();
                // clean white space
                // Todo: add more things that we want to delete?
                input = input.replaceAll(" |\t", "");
                sb.append(input);
            }
            rowData.add(Arrays.asList(fileName, Integer.toString(countCharacters(sb.toString())) ));
       }
       for (List<String> row : rowData) {
            csvWriter.append(String.join(",", row));
            csvWriter.append("\n");
        }
        csvWriter.flush();
        csvWriter.close();

        System.out.println("Building csv complete");
    }

   public static int countCharacters(String s) {
       int count = 0;
       for (int i = 0 ; i < s.length() ; i++){
           if (s.charAt(i) != ' '){
               count++;
           }
       }
       return count;
   }
}