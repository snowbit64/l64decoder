// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64ToBase64URLInPlace
// Entry Point: 00ba1410
// Size: 100 bytes
// Signature: undefined __cdecl base64ToBase64URLInPlace(char * param_1)


/* StringUtil::base64ToBase64URLInPlace(char*) */

void StringUtil::base64ToBase64URLInPlace(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1;
  do {
    cVar2 = *pcVar1;
    if (cVar2 == '+') {
      cVar2 = '-';
LAB_00ba141c:
      *pcVar1 = cVar2;
    }
    else {
      if (cVar2 == '/') {
        cVar2 = '_';
        goto LAB_00ba141c;
      }
      if (cVar2 == '\0') {
        while ((param_1 < pcVar1 && (pcVar1[-1] == '='))) {
          pcVar1[-1] = '\0';
          pcVar1 = pcVar1 + -1;
        }
        return;
      }
    }
    pcVar1 = pcVar1 + 1;
  } while( true );
}


