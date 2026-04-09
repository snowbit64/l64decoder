// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 0091fb98
// Size: 344 bytes
// Signature: undefined __thiscall write(BufferedFileWriter * this, void * param_1, uint param_2)


/* BufferedFileWriter::write(void const*, unsigned int) */

uint __thiscall BufferedFileWriter::write(BufferedFileWriter *this,void *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(this + 0x14);
  if (param_2 < uVar3) {
    uVar5 = param_2;
    if (param_2 == 0) {
      return 0;
    }
    do {
      uVar3 = uVar3 - *(uint *)(this + 0x18);
      uVar1 = uVar5;
      if (uVar3 <= uVar5) {
        uVar1 = uVar3;
      }
      memcpy((void *)(*(long *)(this + 0x20) + (ulong)*(uint *)(this + 0x18)),param_1,(ulong)uVar1);
      uVar3 = *(uint *)(this + 0x14);
      iVar2 = *(int *)(this + 0x18);
      *(uint *)(this + 0x18) = iVar2 + uVar1;
      if (iVar2 + uVar1 == uVar3) {
        uVar3 = (**(code **)(**(long **)(this + 8) + 0x30))
                          (*(long **)(this + 8),*(undefined8 *)(this + 0x20));
        if (0 < (int)uVar3) {
          *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar3;
          *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar3;
        }
        if (uVar3 != *(uint *)(this + 0x14)) {
          return 0xffffffff;
        }
      }
      uVar5 = uVar5 - uVar1;
      param_1 = (void *)((long)param_1 + (ulong)uVar1);
      if (uVar5 == 0) {
        return param_2;
      }
    } while( true );
  }
  iVar2 = *(int *)(this + 0x18);
  if (iVar2 != 0) {
    iVar4 = (**(code **)(**(long **)(this + 8) + 0x30))
                      (*(long **)(this + 8),*(undefined8 *)(this + 0x20),iVar2);
    if (0 < iVar4) {
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + iVar4;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) - iVar4;
    }
    if (iVar4 != iVar2) {
      return 0xffffffff;
    }
  }
  uVar3 = (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),param_1,param_2);
  if (0 < (int)uVar3) {
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar3;
  }
  if (uVar3 != param_2) {
    return 0xffffffff;
  }
  return param_2;
}


