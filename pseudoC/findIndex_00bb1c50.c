// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findIndex
// Entry Point: 00bb1c50
// Size: 408 bytes
// Signature: undefined __thiscall findIndex(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue> * this, TriHashKey * param_1)


/* btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,
   Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>::findIndex(Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey
   const&) const */

int __thiscall
btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
::findIndex(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
            *this,TriHashKey *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(float *)(param_1 + 8) + (int)*(float *)param_1 + (int)*(float *)(param_1 + 0x10) +
          (int)*(float *)(param_1 + 0x18) + (int)*(float *)(param_1 + 0x20) +
          (int)*(float *)(param_1 + 0x28);
  uVar2 = iVar1 + (iVar1 * 0x8000 ^ 0xffffffffU);
  uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
  uVar2 = uVar2 ^ (int)uVar2 >> 6;
  uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
  uVar2 = (uVar2 ^ (int)uVar2 >> 0x10) & *(int *)(this + 0x48) - 1U;
  if ((uVar2 < *(uint *)(this + 4)) &&
     (iVar1 = *(int *)(*(long *)(this + 0x10) + (long)(int)uVar2 * 4), iVar1 != -1)) {
    lVar3 = *(long *)(this + 0x70);
    do {
      lVar4 = (long)iVar1;
      if (((((*(float *)(param_1 + 0xc) == *(float *)(lVar3 + (long)iVar1 * 0x30 + 0xc)) &&
            (*(float *)(lVar3 + lVar4 * 0x30 + 8) == *(float *)(param_1 + 8))) &&
           (*(float *)(param_1 + 4) == *(float *)(lVar3 + lVar4 * 0x30 + 4))) &&
          ((((*(float *)(lVar3 + lVar4 * 0x30) == *(float *)param_1 &&
             (*(float *)(param_1 + 0x1c) == *(float *)(lVar3 + lVar4 * 0x30 + 0x1c))) &&
            ((*(float *)(lVar3 + lVar4 * 0x30 + 0x18) == *(float *)(param_1 + 0x18) &&
             ((*(float *)(param_1 + 0x14) == *(float *)(lVar3 + lVar4 * 0x30 + 0x14) &&
              (*(float *)(lVar3 + lVar4 * 0x30 + 0x10) == *(float *)(param_1 + 0x10))))))) &&
           (*(float *)(param_1 + 0x2c) == *(float *)(lVar3 + lVar4 * 0x30 + 0x2c))))) &&
         (((*(float *)(lVar3 + lVar4 * 0x30 + 0x28) == *(float *)(param_1 + 0x28) &&
           (*(float *)(param_1 + 0x24) == *(float *)(lVar3 + lVar4 * 0x30 + 0x24))) &&
          (*(float *)(lVar3 + lVar4 * 0x30 + 0x20) == *(float *)(param_1 + 0x20))))) {
        return iVar1;
      }
      iVar1 = *(int *)(*(long *)(this + 0x30) + lVar4 * 4);
    } while (iVar1 != -1);
  }
  return -1;
}


