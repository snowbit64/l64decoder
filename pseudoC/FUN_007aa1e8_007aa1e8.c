// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa1e8
// Entry Point: 007aa1e8
// Size: 96 bytes
// Signature: undefined FUN_007aa1e8(void)


void FUN_007aa1e8(GsShape *param_1,uint *param_2)

{
  byte bVar1;
  GsShape *pGVar2;
  
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 3;
  pGVar2 = (GsShape *)
           ReflectionUtil::getEntity(*param_2,0x800,"setShapeBonesFromShape","sourceShape");
  if (pGVar2 != (GsShape *)0x0) {
    bVar1 = GsShape::setBindBonesFromShape(param_1,pGVar2);
    *(byte *)(param_2 + 0x40) = bVar1 & 1;
  }
  return;
}


