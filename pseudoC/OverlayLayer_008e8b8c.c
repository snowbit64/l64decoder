// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OverlayLayer
// Entry Point: 008e8b8c
// Size: 712 bytes
// Signature: undefined __thiscall OverlayLayer(OverlayLayer * this, uint param_1, float param_2, float param_3, float param_4, char * param_5, char * param_6, char * param_7, char * param_8, char * param_9, float param_10)


/* BaseTerrain::OverlayLayer::OverlayLayer(unsigned int, float, float, float, char const*, char
   const*, char const*, char const*, char const*, float) */

void __thiscall
BaseTerrain::OverlayLayer::OverlayLayer
          (OverlayLayer *this,uint param_1,float param_2,float param_3,float param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,char *param_9,float param_10)

{
  size_t sVar1;
  ulong uVar2;
  OverlayLayer *pOVar3;
  
  *(uint *)this = param_1;
  sVar1 = strlen(param_6);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar3 = this + 9;
    this[8] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e8c40;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pOVar3 = (OverlayLayer *)operator_new(uVar2);
    *(size_t *)(this + 0x10) = sVar1;
    *(OverlayLayer **)(this + 0x18) = pOVar3;
    *(ulong *)(this + 8) = uVar2 | 1;
LAB_008e8c40:
    memcpy(pOVar3,param_6,sVar1);
  }
  pOVar3[sVar1] = (OverlayLayer)0x0;
  *(float *)(this + 0x20) = param_2;
  *(float *)(this + 0x24) = param_3;
  *(float *)(this + 0x28) = param_4;
  sVar1 = strlen(param_5);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e8e34 to 008e8e3b has its CatchHandler @ 008e8ec0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar3 = this + 0x31;
    this[0x30] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e8cb4;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e8c9c to 008e8ca3 has its CatchHandler @ 008e8ec0 */
    pOVar3 = (OverlayLayer *)operator_new(uVar2);
    *(size_t *)(this + 0x38) = sVar1;
    *(OverlayLayer **)(this + 0x40) = pOVar3;
    *(ulong *)(this + 0x30) = uVar2 | 1;
LAB_008e8cb4:
    memcpy(pOVar3,param_5,sVar1);
  }
  pOVar3[sVar1] = (OverlayLayer)0x0;
  sVar1 = strlen(param_7);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e8e3c to 008e8e43 has its CatchHandler @ 008e8ea8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar3 = this + 0x49;
    this[0x48] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e8d1c;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e8d04 to 008e8d0b has its CatchHandler @ 008e8ea8 */
    pOVar3 = (OverlayLayer *)operator_new(uVar2);
    *(size_t *)(this + 0x50) = sVar1;
    *(OverlayLayer **)(this + 0x58) = pOVar3;
    *(ulong *)(this + 0x48) = uVar2 | 1;
LAB_008e8d1c:
    memcpy(pOVar3,param_7,sVar1);
  }
  pOVar3[sVar1] = (OverlayLayer)0x0;
  sVar1 = strlen(param_8);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e8e44 to 008e8e4b has its CatchHandler @ 008e8e88 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar3 = this + 0x61;
    this[0x60] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e8d84;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e8d6c to 008e8d73 has its CatchHandler @ 008e8e88 */
    pOVar3 = (OverlayLayer *)operator_new(uVar2);
    *(size_t *)(this + 0x68) = sVar1;
    *(OverlayLayer **)(this + 0x70) = pOVar3;
    *(ulong *)(this + 0x60) = uVar2 | 1;
LAB_008e8d84:
    memcpy(pOVar3,param_8,sVar1);
  }
  pOVar3[sVar1] = (OverlayLayer)0x0;
  sVar1 = strlen(param_9);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e8e4c to 008e8e53 has its CatchHandler @ 008e8e54 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pOVar3 = this + 0x79;
    this[0x78] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_008e8df8;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e8dd0 to 008e8dd7 has its CatchHandler @ 008e8e54 */
    pOVar3 = (OverlayLayer *)operator_new(uVar2);
    *(size_t *)(this + 0x80) = sVar1;
    *(OverlayLayer **)(this + 0x88) = pOVar3;
    *(ulong *)(this + 0x78) = uVar2 | 1;
  }
  memcpy(pOVar3,param_9,sVar1);
LAB_008e8df8:
  pOVar3[sVar1] = (OverlayLayer)0x0;
  *(float *)(this + 0x90) = param_10;
  *(uint *)(this + 0x94) = param_1;
  return;
}


