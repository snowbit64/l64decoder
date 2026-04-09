// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getResolvedType
// Entry Point: 00c51c4c
// Size: 332 bytes
// Signature: undefined __thiscall getResolvedType(IR_TypeSet * this, IR_Type * param_1, IR_Type * param_2)


/* IR_TypeSet::getResolvedType(IR_Type*, IR_Type*) */

IR_Type * __thiscall IR_TypeSet::getResolvedType(IR_TypeSet *this,IR_Type *param_1,IR_Type *param_2)

{
  IR_Struct *pIVar1;
  IR_Type *pIVar2;
  IR_Type *pIVar3;
  
  pIVar3 = param_1;
  if ((param_1 != (IR_Type *)0x0) &&
     ((*(int *)param_1 != 0 || (pIVar3 = param_2, 1 < *(int *)(param_1 + 8) - 1U)))) {
    pIVar3 = param_1;
    switch(*(int *)param_1) {
    case 3:
      if ((*(IR_Struct **)(param_1 + 8))[0x50] != (IR_Struct)0x0) {
        pIVar1 = (IR_Struct *)
                 IR_Struct::getResolvedStruct(*(IR_Struct **)(param_1 + 8),this,param_2);
        pIVar3 = (IR_Type *)getStructType(this,pIVar1);
        return pIVar3;
      }
      break;
    case 4:
      pIVar2 = (IR_Type *)getResolvedType(this,*(IR_Type **)(param_1 + 8),param_2);
      if (pIVar2 != *(IR_Type **)(param_1 + 8)) {
        pIVar3 = (IR_Type *)getArrayType(this,pIVar2,*(uint *)(param_1 + 0x10));
        return pIVar3;
      }
      break;
    case 5:
      pIVar2 = (IR_Type *)getResolvedType(this,*(IR_Type **)(param_1 + 8),param_2);
      if (pIVar2 != *(IR_Type **)(param_1 + 8)) {
        pIVar3 = (IR_Type *)getReferenceType(this,pIVar2);
        return pIVar3;
      }
      break;
    case 6:
      pIVar2 = (IR_Type *)getResolvedType(this,*(IR_Type **)(param_1 + 8),param_2);
      if (pIVar2 != *(IR_Type **)(param_1 + 8)) {
        pIVar3 = (IR_Type *)getPointerType(this,pIVar2);
        return pIVar3;
      }
      break;
    case 7:
      pIVar2 = (IR_Type *)getResolvedType(this,*(IR_Type **)(param_1 + 8),param_2);
      if (pIVar2 != *(IR_Type **)(param_1 + 8)) {
        pIVar3 = (IR_Type *)
                 getTextureType(this,*(IR_TextureDim *)(param_1 + 0x10),
                                (IR_TextureInfo *)(param_1 + 0x14),pIVar2);
        return pIVar3;
      }
    }
  }
  return pIVar3;
}


