// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LayerAttribute
// Entry Point: 00937ee8
// Size: 288 bytes
// Signature: undefined __thiscall LayerAttribute(LayerAttribute * this, char * param_1, char * param_2)


/* TerrainTransformGroupDesc::LayerAttribute::LayerAttribute(char const*, char const*) */

void __thiscall
TerrainTransformGroupDesc::LayerAttribute::LayerAttribute
          (LayerAttribute *this,char *param_1,char *param_2)

{
  size_t sVar1;
  LayerAttribute *pLVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pLVar2 = this + 1;
    *this = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00937f58;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pLVar2 = (LayerAttribute *)operator_new(uVar3);
    *(size_t *)(this + 8) = sVar1;
    *(LayerAttribute **)(this + 0x10) = pLVar2;
    *(ulong *)this = uVar3 | 1;
LAB_00937f58:
    memcpy(pLVar2,param_1,sVar1);
  }
  pLVar2[sVar1] = (LayerAttribute)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00938000 to 00938007 has its CatchHandler @ 00938008 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pLVar2 = this + 0x19;
    this[0x18] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00937fcc;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00937fa4 to 00937fab has its CatchHandler @ 00938008 */
    pLVar2 = (LayerAttribute *)operator_new(uVar3);
    *(size_t *)(this + 0x20) = sVar1;
    *(LayerAttribute **)(this + 0x28) = pLVar2;
    *(ulong *)(this + 0x18) = uVar3 | 1;
  }
  memcpy(pLVar2,param_2,sVar1);
LAB_00937fcc:
  pLVar2[sVar1] = (LayerAttribute)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(LayerAttribute **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x30) = 0x3f80000000000000;
  return;
}


