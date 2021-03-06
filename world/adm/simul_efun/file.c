// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */

// file.c

void cat(string file)
{
   write(read_file(file));
}

void log_file(string file, string text)
{
   write_file(LOG_DIR + file, text);
}

void assure_file(string file)
{
   string path, *dir;
   int i;

   if (file_size(file) != -1)
      return;

   seteuid(ROOT_UID);
   dir = explode(file, "/");
   dir = dir[0..sizeof(dir)-2];
   path = "/";
   for (i = 0; i < sizeof(dir); i++)
   {
      path += dir[i];
      mkdir(path);
      path += "/";
   }
}

string base_name(object ob)
{
   string file;

   if (sscanf(file_name(ob), "%s#%*d", file) == 2)
      return file;
   else
      return file_name(ob);
}

int tail(string path)
{
   if (stringp(path) && file_size(path) >= 0)
   {
      write(read_file(path, file_length(path) - 9));
      return 1;
   }

   return 0;
}
