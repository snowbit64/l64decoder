// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DetailLayer
// Entry Point: 008e8114
// Size: 756 bytes
// Signature: undefined __thiscall DetailLayer(DetailLayer * this, uint param_1, float param_2, float param_3, float param_4, char * param_5, char * param_6, char * param_7, char * param_8, char * param_9, float param_10, vector * param_11)


/* BaseTerrain::DetailLayer::DetailLayer(unsigned int, float, float, float, char const*, char
   const*, char const*, char const*, char const*, float, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> > const&) */

void __thiscall
BaseTerrain::DetailLayer::DetailLayer
          (DetailLayer *this,uint param_1,float param_2,float param_3,float param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,char *param_9,float param_10,vector *param_11)

{
  size_t sVar1;
  DetailLayer *pDVar2;
  ulong uVar3;
  
  *(uint *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  sVar1 = strlen(param_5);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x11;
    this[0x10] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e81f0;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pDVar2 = (DetailLayer *)operator_new(uVar3);
    *(size_t *)(this + 0x18) = sVar1;
    *(DetailLayer **)(this + 0x20) = pDVar2;
    *(ulong *)(this + 0x10) = uVar3 | 1;
LAB_008e81f0:
    memcpy(pDVar2,param_5,sVar1);
  }
  pDVar2[sVar1] = (DetailLayer)0x0;
  sVar1 = strlen(param_6);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e83e8 to 008e83ef has its CatchHandler @ 008e8490 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x29;
    this[0x28] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e825c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e8244 to 008e824b has its CatchHandler @ 008e8490 */
    pDVar2 = (DetailLayer *)operator_new(uVar3);
    *(size_t *)(this + 0x30) = sVar1;
    *(DetailLayer **)(this + 0x38) = pDVar2;
    *(ulong *)(this + 0x28) = uVar3 | 1;
LAB_008e825c:
    memcpy(pDVar2,param_6,sVar1);
  }
  pDVar2[sVar1] = (DetailLayer)0x0;
  sVar1 = strlen(param_7);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e83f0 to 008e83f7 has its CatchHandler @ 008e8474 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x41;
    this[0x40] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e82c4;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e82ac to 008e82b3 has its CatchHandler @ 008e8474 */
    pDVar2 = (DetailLayer *)operator_new(uVar3);
    *(size_t *)(this + 0x48) = sVar1;
    *(DetailLayer **)(this + 0x50) = pDVar2;
    *(ulong *)(this + 0x40) = uVar3 | 1;
LAB_008e82c4:
    memcpy(pDVar2,param_7,sVar1);
  }
  pDVar2[sVar1] = (DetailLayer)0x0;
  sVar1 = strlen(param_8);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e83f8 to 008e83ff has its CatchHandler @ 008e845c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x59;
    this[0x58] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008e832c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e8314 to 008e831b has its CatchHandler @ 008e845c */
    pDVar2 = (DetailLayer *)operator_new(uVar3);
    *(size_t *)(this + 0x60) = sVar1;
    *(DetailLayer **)(this + 0x68) = pDVar2;
    *(ulong *)(this + 0x58) = uVar3 | 1;
LAB_008e832c:
    memcpy(pDVar2,param_8,sVar1);
  }
  pDVar2[sVar1] = (DetailLayer)0x0;
  sVar1 = strlen(param_9);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008e8400 to 008e8407 has its CatchHandler @ 008e843c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x71;
    this[0x70] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_008e83a4;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e837c to 008e8383 has its CatchHandler @ 008e843c */
    pDVar2 = (DetailLayer *)operator_new(uVar3);
    *(size_t *)(this + 0x78) = sVar1;
    *(DetailLayer **)(this + 0x80) = pDVar2;
    *(ulong *)(this + 0x70) = uVar3 | 1;
  }
  memcpy(pDVar2,param_9,sVar1);
LAB_008e83a4:
  pDVar2[sVar1] = (DetailLayer)0x0;
  *(float *)(this + 0x88) = param_10;
                    /* try { // try from 008e83b0 to 008e83b7 has its CatchHandler @ 008e8408 */
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::vector
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x90),param_11);
  *(uint *)(this + 0xa8) = param_1;
  return;
}


