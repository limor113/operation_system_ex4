#ifndef LOG_HEADER
#define LOG_HEADER

void open_log(char* log_path);

void close_log();

void write_log(_In_z_ _Printf_format_string_ const char * _Format, ...);

#endif