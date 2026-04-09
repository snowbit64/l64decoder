// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OverlayLayerDesc
// Entry Point: 00936e1c
// Size: 660 bytes
// Signature: undefined __thiscall OverlayLayerDesc(OverlayLayerDesc * this, float param_1, float param_2, float param_3, char * param_4, char * param_5, char * param_6, char * param_7, char * param_8, float param_9)


/* TerrainTransformGroupDesc::OverlayLayerDesc::OverlayLayerDesc(float, float, float, char const*,
   char const*, char const*, char const*, char const*, float) */

void __thiscall
TerrainTransformGroupDesc::OverlayLayerDesc::OverlayLayerDesc
          (OverlayLayerDesc *this,float param_1,float param_2,float param_3,char *param_4,
          char *param_5,char *param_6,char *param_7,char *param_8,float param_9)

{
  size_t sVar1;
  OverlayLayerDesc *pOVar2;
  ulong uVar3;
  
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  sVar1 = strlen(param_4);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar2 = this + 0x11;
    this[0x10] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00936eb4;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pOVar2 = (OverlayLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x18) = sVar1;
    *(OverlayLayerDesc **)(this + 0x20) = pOVar2;
    *(ulong *)(this + 0x10) = uVar3 | 1;
LAB_00936eb4:
    memcpy(pOVar2,param_4,sVar1);
  }
  pOVar2[sVar1] = (OverlayLayerDesc)0x0;
  sVar1 = strlen(param_5);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00937090 to 00937097 has its CatchHandler @ 00937130 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar2 = this + 0x29;
    this[0x28] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00936f1c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00936f04 to 00936f0b has its CatchHandler @ 00937130 */
    pOVar2 = (OverlayLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x30) = sVar1;
    *(OverlayLayerDesc **)(this + 0x38) = pOVar2;
    *(ulong *)(this + 0x28) = uVar3 | 1;
LAB_00936f1c:
    memcpy(pOVar2,param_5,sVar1);
  }
  pOVar2[sVar1] = (OverlayLayerDesc)0x0;
  sVar1 = strlen(param_6);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00937098 to 0093709f has its CatchHandler @ 00937110 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar2 = this + 0x41;
    this[0x40] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00936f84;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00936f6c to 00936f73 has its CatchHandler @ 00937110 */
    pOVar2 = (OverlayLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x48) = sVar1;
    *(OverlayLayerDesc **)(this + 0x50) = pOVar2;
    *(ulong *)(this + 0x40) = uVar3 | 1;
LAB_00936f84:
    memcpy(pOVar2,param_6,sVar1);
  }
  pOVar2[sVar1] = (OverlayLayerDesc)0x0;
  sVar1 = strlen(param_7);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 009370a0 to 009370a7 has its CatchHandler @ 009370f0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar2 = this + 0x59;
    this[0x58] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00936fec;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00936fd4 to 00936fdb has its CatchHandler @ 009370f0 */
    pOVar2 = (OverlayLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x60) = sVar1;
    *(OverlayLayerDesc **)(this + 0x68) = pOVar2;
    *(ulong *)(this + 0x58) = uVar3 | 1;
LAB_00936fec:
    memcpy(pOVar2,param_7,sVar1);
  }
  pOVar2[sVar1] = (OverlayLayerDesc)0x0;
  sVar1 = strlen(param_8);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 009370a8 to 009370af has its CatchHandler @ 009370b0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar2 = this + 0x71;
    this[0x70] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00937060;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00937038 to 0093703f has its CatchHandler @ 009370b0 */
    pOVar2 = (OverlayLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x78) = sVar1;
    *(OverlayLayerDesc **)(this + 0x80) = pOVar2;
    *(ulong *)(this + 0x70) = uVar3 | 1;
  }
  memcpy(pOVar2,param_8,sVar1);
LAB_00937060:
  pOVar2[sVar1] = (OverlayLayerDesc)0x0;
  *(float *)(this + 0x88) = param_9;
  return;
}


