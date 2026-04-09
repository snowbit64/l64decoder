// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: matchExtension
// Entry Point: 008bf720
// Size: 208 bytes
// Signature: undefined __thiscall matchExtension(LocalFileListChannel * this, char * param_1, char * * param_2, uint param_3)


/* LocalFileListChannel::matchExtension(char const*, char const**, unsigned int) */

undefined8 __thiscall
LocalFileListChannel::matchExtension
          (LocalFileListChannel *this,char *param_1,char **param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  
  sVar3 = strlen(param_1);
  uVar2 = (uint)sVar3;
  if ((4 < uVar2) && (param_3 != 0)) {
    bVar1 = param_1[uVar2 - 3];
    uVar4 = bVar1 | 0x20;
    uVar5 = (ulong)param_3;
    if (0x19 < bVar1 - 0x41) {
      uVar4 = (uint)bVar1;
    }
    do {
      pbVar6 = (byte *)*param_2;
      if (uVar4 == *pbVar6) {
        bVar1 = param_1[uVar2 - 2];
        uVar7 = bVar1 | 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar7 = (uint)bVar1;
        }
        if (uVar7 == pbVar6[1]) {
          bVar1 = param_1[uVar2 - 1];
          uVar7 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar7 = (uint)bVar1;
          }
          if (uVar7 == pbVar6[2]) {
            return 1;
          }
        }
      }
      param_2 = (char **)((byte **)param_2 + 1);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}


