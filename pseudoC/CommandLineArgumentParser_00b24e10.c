// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CommandLineArgumentParser
// Entry Point: 00b24e10
// Size: 12 bytes
// Signature: undefined __thiscall CommandLineArgumentParser(CommandLineArgumentParser * this, int param_1, char * * param_2)


/* CommandLineArgumentParser::CommandLineArgumentParser(int, char**) */

void __thiscall
CommandLineArgumentParser::CommandLineArgumentParser
          (CommandLineArgumentParser *this,int param_1,char **param_2)

{
  *(int *)this = param_1;
  *(char ***)(this + 8) = param_2;
  return;
}


