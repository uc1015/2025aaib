//week15_4_pressure_csv_loadTable_getString_println
Table table = loadTable("pressure.csv", "header");

for( TableRow row : table.rows() ){
  String t = row.getString("
