// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parameter
// Entry Point: 0094accc
// Size: 548 bytes
// Signature: undefined __thiscall Parameter(Parameter * this, char * param_1, char * param_2, uint param_3, float * param_4, float * param_5, float * param_6, char * param_7)


/* CustomShader::Parameter::Parameter(char const*, char const*, unsigned int, float*, float*,
   float*, char const*) */

void __thiscall
CustomShader::Parameter::Parameter
          (Parameter *this,char *param_1,char *param_2,uint param_3,float *param_4,float *param_5,
          float *param_6,char *param_7)

{
  size_t sVar1;
  ulong uVar2;
  Parameter *pPVar3;
  float fVar4;
  
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pPVar3 = this + 1;
    *this = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_0094ad64;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pPVar3 = (Parameter *)operator_new(uVar2);
    *(size_t *)(this + 8) = sVar1;
    *(Parameter **)(this + 0x10) = pPVar3;
    *(ulong *)this = uVar2 | 1;
LAB_0094ad64:
    memcpy(pPVar3,param_1,sVar1);
  }
  pPVar3[sVar1] = (Parameter)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 0094aee0 to 0094aee7 has its CatchHandler @ 0094af20 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pPVar3 = this + 0x19;
    this[0x18] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_0094adcc;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0094adb4 to 0094adbb has its CatchHandler @ 0094af20 */
    pPVar3 = (Parameter *)operator_new(uVar2);
    *(size_t *)(this + 0x20) = sVar1;
    *(Parameter **)(this + 0x28) = pPVar3;
    *(ulong *)(this + 0x18) = uVar2 | 1;
LAB_0094adcc:
    memcpy(pPVar3,param_2,sVar1);
  }
  pPVar3[sVar1] = (Parameter)0x0;
  sVar1 = strlen(param_7);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 0094aee8 to 0094aeef has its CatchHandler @ 0094aef0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pPVar3 = this + 0x69;
    this[0x68] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_0094ae40;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0094ae18 to 0094ae1f has its CatchHandler @ 0094aef0 */
    pPVar3 = (Parameter *)operator_new(uVar2);
    *(size_t *)(this + 0x70) = sVar1;
    *(Parameter **)(this + 0x78) = pPVar3;
    *(ulong *)(this + 0x68) = uVar2 | 1;
  }
  memcpy(pPVar3,param_7,sVar1);
LAB_0094ae40:
  pPVar3[sVar1] = (Parameter)0x0;
  *(float *)(this + 0x30) = *param_4;
  if (3 < param_3) {
    param_3 = 4;
  }
  fVar4 = param_4[1];
  *(uint *)(this + 0x60) = param_3;
  *(float *)(this + 0x34) = fVar4;
  *(float *)(this + 0x38) = param_4[2];
  *(float *)(this + 0x3c) = param_4[3];
  *(float *)(this + 0x40) = *param_5;
  *(float *)(this + 0x44) = param_5[1];
  *(float *)(this + 0x48) = param_5[2];
  *(float *)(this + 0x4c) = param_5[3];
  *(float *)(this + 0x50) = *param_6;
  *(float *)(this + 0x54) = param_6[1];
  *(float *)(this + 0x58) = param_6[2];
  *(float *)(this + 0x5c) = param_6[3];
  return;
}


