// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeChannelDesc
// Entry Point: 009601ec
// Size: 100 bytes
// Signature: undefined __cdecl decodeChannelDesc(char * param_1, bool param_2, uint * param_3, char * param_4)


/* MultiresTextureGpuUpdater::decodeChannelDesc(char const*, bool, unsigned int&, char*) */

bool MultiresTextureGpuUpdater::decodeChannelDesc
               (char *param_1,bool param_2,uint *param_3,char *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  char *pcVar3;
  
  if (param_2) {
    pcVar3 = strchr(param_1,0x3b);
    if (pcVar3 == (char *)0x0) {
      return false;
    }
    param_1 = pcVar3 + 1;
  }
  *param_3 = (byte)*param_1 - 0x30;
  bVar2 = ((byte *)param_1)[1];
  if (bVar2 == 0x3a) {
    uVar1 = *(undefined4 *)((byte *)param_1 + 2);
    param_4[4] = '\0';
    *(undefined4 *)param_4 = uVar1;
  }
  return bVar2 == 0x3a;
}


