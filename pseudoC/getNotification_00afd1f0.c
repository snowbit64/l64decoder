// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNotification
// Entry Point: 00afd1f0
// Size: 336 bytes
// Signature: undefined __thiscall getNotification(GiantsNotificationManager * this, uint param_1, char * * param_2, char * * param_3, char * * param_4, char * * param_5, char * * param_6)


/* GiantsNotificationManager::getNotification(unsigned int, char const*&, char const*&, char
   const*&, char const*&, char const*&) */

void __thiscall
GiantsNotificationManager::getNotification
          (GiantsNotificationManager *this,uint param_1,char **param_2,char **param_3,char **param_4
          ,char **param_5,char **param_6)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  applyFilter();
  lVar2 = *(long *)(this + 0x40);
  if (*(long *)(this + 0x48) - lVar2 != 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = (*(long *)(this + 0x48) - lVar2 >> 4) * -0x71c71c71c71c71c7;
    do {
      if (*(char *)(lVar2 + uVar3 * 0x90 + 0x88) != '\0') {
        if (uVar5 == param_1) {
          lVar4 = uVar3 * 0x90;
          lVar2 = lVar2 + lVar4;
          pcVar1 = (char *)(lVar2 + 0x11);
          if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
            pcVar1 = *(char **)(lVar2 + 0x20);
          }
          *param_2 = pcVar1;
          lVar2 = *(long *)(this + 0x40) + lVar4;
          pcVar1 = (char *)(lVar2 + 0x29);
          if ((*(byte *)(lVar2 + 0x28) & 1) != 0) {
            pcVar1 = *(char **)(lVar2 + 0x38);
          }
          *param_3 = pcVar1;
          lVar2 = *(long *)(this + 0x40) + lVar4;
          pcVar1 = (char *)(lVar2 + 0x41);
          if ((*(byte *)(lVar2 + 0x40) & 1) != 0) {
            pcVar1 = *(char **)(lVar2 + 0x50);
          }
          *param_4 = pcVar1;
          lVar2 = *(long *)(this + 0x40) + lVar4;
          pcVar1 = (char *)(lVar2 + 0x59);
          if ((*(byte *)(lVar2 + 0x58) & 1) != 0) {
            pcVar1 = *(char **)(lVar2 + 0x68);
          }
          *param_5 = pcVar1;
          lVar4 = *(long *)(this + 0x40) + lVar4;
          pcVar1 = (char *)(lVar4 + 0x71);
          if ((*(byte *)(lVar4 + 0x70) & 1) != 0) {
            pcVar1 = *(char **)(lVar4 + 0x80);
          }
          *param_6 = pcVar1;
          return;
        }
        uVar5 = uVar5 + 1;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 <= uVar6 && uVar6 - uVar3 != 0);
  }
  return;
}


