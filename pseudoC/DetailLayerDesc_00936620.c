// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DetailLayerDesc
// Entry Point: 00936620
// Size: 796 bytes
// Signature: undefined __thiscall DetailLayerDesc(DetailLayerDesc * this, float param_1, float param_2, float param_3, char * param_4, char * param_5, char * param_6, char * param_7, char * param_8, float param_9, float * param_10, uint param_11)


/* TerrainTransformGroupDesc::DetailLayerDesc::DetailLayerDesc(float, float, float, char const*,
   char const*, char const*, char const*, char const*, float, float const*, unsigned int) */

void __thiscall
TerrainTransformGroupDesc::DetailLayerDesc::DetailLayerDesc
          (DetailLayerDesc *this,float param_1,float param_2,float param_3,char *param_4,
          char *param_5,char *param_6,char *param_7,char *param_8,float param_9,float *param_10,
          uint param_11)

{
  size_t sVar1;
  void *__s;
  DetailLayerDesc *pDVar2;
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
    pDVar2 = this + 0x11;
    this[0x10] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_009366c8;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pDVar2 = (DetailLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x18) = sVar1;
    *(DetailLayerDesc **)(this + 0x20) = pDVar2;
    *(ulong *)(this + 0x10) = uVar3 | 1;
LAB_009366c8:
    memcpy(pDVar2,param_4,sVar1);
  }
  pDVar2[sVar1] = (DetailLayerDesc)0x0;
  sVar1 = strlen(param_5);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 0093691c to 00936923 has its CatchHandler @ 009369d0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x29;
    this[0x28] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00936734;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093671c to 00936723 has its CatchHandler @ 009369d0 */
    pDVar2 = (DetailLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x30) = sVar1;
    *(DetailLayerDesc **)(this + 0x38) = pDVar2;
    *(ulong *)(this + 0x28) = uVar3 | 1;
LAB_00936734:
    memcpy(pDVar2,param_5,sVar1);
  }
  pDVar2[sVar1] = (DetailLayerDesc)0x0;
  sVar1 = strlen(param_6);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00936924 to 0093692b has its CatchHandler @ 009369b8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x41;
    this[0x40] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_0093679c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00936784 to 0093678b has its CatchHandler @ 009369b8 */
    pDVar2 = (DetailLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x48) = sVar1;
    *(DetailLayerDesc **)(this + 0x50) = pDVar2;
    *(ulong *)(this + 0x40) = uVar3 | 1;
LAB_0093679c:
    memcpy(pDVar2,param_6,sVar1);
  }
  pDVar2[sVar1] = (DetailLayerDesc)0x0;
  sVar1 = strlen(param_7);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 0093692c to 00936933 has its CatchHandler @ 00936998 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x59;
    this[0x58] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00936804;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009367ec to 009367f3 has its CatchHandler @ 00936998 */
    pDVar2 = (DetailLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x60) = sVar1;
    *(DetailLayerDesc **)(this + 0x68) = pDVar2;
    *(ulong *)(this + 0x58) = uVar3 | 1;
LAB_00936804:
    memcpy(pDVar2,param_7,sVar1);
  }
  pDVar2[sVar1] = (DetailLayerDesc)0x0;
  sVar1 = strlen(param_8);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00936934 to 0093693b has its CatchHandler @ 00936978 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pDVar2 = this + 0x71;
    this[0x70] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_0093687c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00936854 to 0093685b has its CatchHandler @ 00936978 */
    pDVar2 = (DetailLayerDesc *)operator_new(uVar3);
    *(size_t *)(this + 0x78) = sVar1;
    *(DetailLayerDesc **)(this + 0x80) = pDVar2;
    *(ulong *)(this + 0x70) = uVar3 | 1;
  }
  memcpy(pDVar2,param_8,sVar1);
LAB_0093687c:
  pDVar2[sVar1] = (DetailLayerDesc)0x0;
  *(float *)(this + 0x88) = param_9;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  if (param_11 == 0) {
    return;
  }
  uVar3 = (ulong)param_11 * 4;
                    /* try { // try from 00936898 to 0093689f has its CatchHandler @ 0093693c */
  __s = operator_new(uVar3);
  *(void **)(this + 0x90) = __s;
  *(void **)(this + 0xa0) = (void *)((long)__s + uVar3);
  memset(__s,0,uVar3);
  *(void **)(this + 0x98) = (void *)((long)__s + uVar3);
  memcpy(__s,param_10,uVar3);
  return;
}


