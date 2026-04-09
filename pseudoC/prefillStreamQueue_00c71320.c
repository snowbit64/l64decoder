// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prefillStreamQueue
// Entry Point: 00c71320
// Size: 212 bytes
// Signature: undefined __thiscall prefillStreamQueue(TheoraVideoDecoder * this, uint param_1)


/* TheoraVideoDecoder::prefillStreamQueue(unsigned int) */

void __thiscall TheoraVideoDecoder::prefillStreamQueue(TheoraVideoDecoder *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  (**(code **)(**(long **)this + 0x38))(*(long **)this,param_1);
  iVar5 = 0;
  do {
    pvVar2 = operator_new(0x10010);
    iVar1 = (**(code **)(**(long **)this + 0x28))(*(long **)this,pvVar2,0x10000);
    if (iVar1 < 0) {
      operator_delete(pvVar2);
    }
    else {
      *(int *)((long)pvVar2 + 0x10000) = iVar1;
      do {
        lVar4 = *(long *)(this + 0xd0);
        *(long *)((long)pvVar2 + 0x10008) = lVar4;
        lVar3 = FUN_00f275d0(lVar4,pvVar2);
      } while (lVar4 != lVar3);
      FUN_00f27700(1,this + 0xd8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x20);
  return;
}


