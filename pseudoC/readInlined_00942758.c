// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readInlined
// Entry Point: 00942758
// Size: 424 bytes
// Signature: undefined __thiscall readInlined(BufferedFileReader * this, void * param_1, uint param_2)


/* BufferedFileReader::readInlined(void*, unsigned int) */

ulong __thiscall
BufferedFileReader::readInlined(BufferedFileReader *this,void *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n;
  
  if (this[8] != (BufferedFileReader)0x0) {
    uVar2 = *(ulong *)(this + 0x38);
    uVar6 = *(ulong *)(this + 0x30);
    uVar8 = *(long *)(this + 0x40) - uVar2;
    if ((ulong)param_2 <= *(long *)(this + 0x40) - uVar2) {
      uVar8 = (ulong)param_2;
    }
    if ((uVar2 < uVar6) || (uVar7 = uVar6 + *(uint *)(this + 0x2c), uVar7 <= uVar2)) {
      uVar7 = 0;
    }
    else {
      if (uVar8 + uVar2 <= uVar7) {
        uVar7 = uVar8 + uVar2;
      }
      uVar7 = uVar7 - uVar2;
      if ((int)uVar7 != 0) {
        __n = uVar7 & 0xffffffff;
        memcpy(param_1,(void *)((*(long *)(this + 0x20) + uVar2) - uVar6),__n);
        uVar8 = (ulong)(uint)((int)uVar8 - (int)uVar7);
        param_1 = (void *)((long)param_1 + __n);
        *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + __n;
      }
    }
    uVar5 = (uint)uVar8;
    if (uVar5 != 0) {
      uVar4 = *(uint *)(this + 0x28);
      if (uVar5 * 2 < uVar4) {
        uVar8 = *(long *)(this + 0x40) - (*(long *)(this + 0x30) + (ulong)*(uint *)(this + 0x2c));
        if (uVar8 <= uVar4) {
          uVar4 = (uint)uVar8;
        }
        uVar4 = (**(code **)(**(long **)(this + 0x10) + 0x28))
                          (*(long **)(this + 0x10),*(undefined8 *)(this + 0x20),uVar4);
        if ((int)uVar4 < 0) {
          uVar7 = 0xffffffff;
          *(undefined4 *)(this + 0x2c) = 0;
        }
        else {
          uVar3 = *(uint *)(this + 0x2c);
          uVar1 = uVar4;
          if (uVar5 <= uVar4) {
            uVar1 = uVar5;
          }
          *(uint *)(this + 0x2c) = uVar4;
          *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + (ulong)uVar3;
          if (uVar1 != 0) {
            memcpy(param_1,*(void **)(this + 0x20),(ulong)uVar1);
            *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + (ulong)uVar1;
          }
          uVar7 = (ulong)(uVar1 + (int)uVar7);
        }
      }
      else {
        *(undefined4 *)(this + 0x2c) = 0;
        uVar5 = (**(code **)(**(long **)(this + 0x10) + 0x28))
                          (*(long **)(this + 0x10),param_1,uVar8 & 0xffffffff);
        if ((int)uVar5 < 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (ulong)(uVar5 + (int)uVar7);
          *(ulong *)(this + 0x30) = *(long *)(this + 0x38) + (ulong)uVar5;
          *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + (ulong)uVar5;
        }
      }
    }
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x009428a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(**(long **)(this + 0x10) + 0x28))(*(long **)(this + 0x10),param_1);
  return uVar8;
}


