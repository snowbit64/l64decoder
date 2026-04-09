// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InfoLayerDesc
// Entry Point: 0093a514
// Size: 304 bytes
// Signature: undefined __thiscall InfoLayerDesc(InfoLayerDesc * this, char * param_1, char * param_2, uint param_3, bool param_4)


/* TerrainTransformGroupDesc::InfoLayerDesc::InfoLayerDesc(char const*, char const*, unsigned int,
   bool) */

void __thiscall
TerrainTransformGroupDesc::InfoLayerDesc::InfoLayerDesc
          (InfoLayerDesc *this,char *param_1,char *param_2,uint param_3,bool param_4)

{
  size_t sVar1;
  InfoLayerDesc *pIVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pIVar2 = this + 1;
    *this = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_0093a590;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pIVar2 = (InfoLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 8) = sVar1;
    *(InfoLayerDesc **)(this + 0x10) = pIVar2;
    *(ulong *)this = uVar3 | 1;
LAB_0093a590:
    memcpy(pIVar2,param_1,sVar1);
  }
  pIVar2[sVar1] = (InfoLayerDesc)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 0093a63c to 0093a643 has its CatchHandler @ 0093a644 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pIVar2 = this + 0x19;
    this[0x18] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_0093a604;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093a5dc to 0093a5e3 has its CatchHandler @ 0093a644 */
    pIVar2 = (InfoLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x20) = sVar1;
    *(InfoLayerDesc **)(this + 0x28) = pIVar2;
    *(ulong *)(this + 0x18) = uVar3 | 1;
  }
  memcpy(pIVar2,param_2,sVar1);
LAB_0093a604:
  pIVar2[sVar1] = (InfoLayerDesc)0x0;
  *(uint *)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x34] = (InfoLayerDesc)param_4;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


