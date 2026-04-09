// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeUnifiedPathInPlace
// Entry Point: 00c63438
// Size: 72 bytes
// Signature: undefined __cdecl makeUnifiedPathInPlace(char * param_1)


/* PathUtil::makeUnifiedPathInPlace(char*) */

void PathUtil::makeUnifiedPathInPlace(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  do {
    if (*pcVar1 == '\\') {
      *pcVar1 = '/';
    }
    else if (*pcVar1 == '\0') {
      if ((*param_1 == '/') && (param_1[1] == '/')) {
        *(undefined2 *)param_1 = 0x5c5c;
      }
      return;
    }
    pcVar1 = pcVar1 + 1;
  } while( true );
}


