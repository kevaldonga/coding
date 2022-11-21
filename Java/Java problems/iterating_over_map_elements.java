import java.util.HashMap;
import java.util.Map;

public class iterating_over_map_elements{
    public static void main(String[] args) {
        Map<String,String> map = new HashMap<>();
        map.put("hehehe", "hahaha");
        map.put("fck you", "mdrchod");
        for (Map.Entry<String, String> entry : map.entrySet()) {
            System.out.println(entry.getKey());
            System.out.println(entry.getValue());
        }
    }
}