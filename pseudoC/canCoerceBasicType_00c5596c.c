// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canCoerceBasicType
// Entry Point: 00c5596c
// Size: 116 bytes
// Signature: undefined __thiscall canCoerceBasicType(IR_Type * this, GsTBasicType param_1, bool param_2)


/* IR_Type::canCoerceBasicType(GsTBasicType, bool) */

int __thiscall IR_Type::canCoerceBasicType(IR_Type *this,GsTBasicType param_1,bool param_2)

{
  GsTBasicType GVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 - 3 < 7) {
    GVar1 = *(GsTBasicType *)(this + 8);
    if (GVar1 - 3 < 7) {
      if (GVar1 == param_1) {
        return 0;
      }
      iVar3 = -1;
      if ((param_1 != 9) && (GVar1 != 9)) {
        uVar2 = *(uint *)(&UNK_0053e21c + (ulong)(GVar1 - 3) * 4 + (ulong)(param_1 - 3) * 0x18);
        if ((int)uVar2 < 0) {
          return -1;
        }
        if (((uVar2 >> 5 & 1) != 0) && (!param_2)) {
          return -1;
        }
        iVar3 = 0;
        if ((uVar2 & 0x1f) != 0) {
          iVar3 = (uVar2 & 0x1f) + 1;
        }
      }
      return iVar3;
    }
  }
  return -1;
}


