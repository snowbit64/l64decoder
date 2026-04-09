// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeDosEOLExpand
// Entry Point: 00b32510
// Size: 244 bytes
// Signature: undefined __thiscall writeDosEOLExpand(File * this, void * param_1, uint param_2)


/* File::writeDosEOLExpand(void const*, unsigned int) */

int __thiscall File::writeDosEOLExpand(File *this,void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    uVar4 = 0;
    do {
      if (*(char *)((long)param_1 + uVar3) == '\n') {
        if ((uint)uVar3 != uVar4) {
          iVar1 = (**(code **)(*(long *)this + 0x30))(this,(long)param_1 + (ulong)uVar4);
          iVar2 = iVar1 + iVar2;
        }
        iVar1 = (**(code **)(*(long *)this + 0x30))(this,&DAT_004cd8cc,2);
        uVar4 = (uint)uVar3 + 1;
LAB_00b32578:
        iVar2 = iVar1 + iVar2;
      }
      else if (param_2 - 1 == uVar3) {
        iVar1 = (**(code **)(*(long *)this + 0x30))
                          (this,(long)param_1 + (ulong)uVar4,param_2 - uVar4);
        goto LAB_00b32578;
      }
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
  }
  return iVar2;
}


