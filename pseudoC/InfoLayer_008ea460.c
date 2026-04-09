// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InfoLayer
// Entry Point: 008ea460
// Size: 324 bytes
// Signature: undefined __thiscall InfoLayer(InfoLayer * this, char * param_1, char * param_2, bool param_3, DensityMapEntity * param_4, vector * param_5)


/* BaseTerrain::InfoLayer::InfoLayer(char const*, char const*, bool, DensityMapEntity*,
   std::__ndk1::vector<BaseTerrain::LayerGroup, std::__ndk1::allocator<BaseTerrain::LayerGroup> >
   const&) */

void __thiscall
BaseTerrain::InfoLayer::InfoLayer
          (InfoLayer *this,char *param_1,char *param_2,bool param_3,DensityMapEntity *param_4,
          vector *param_5)

{
  size_t sVar1;
  InfoLayer *pIVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pIVar2 = this + 1;
    *this = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_008ea4e4;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pIVar2 = (InfoLayer *)operator_new(uVar3);
    *(size_t *)(this + 8) = sVar1;
    *(InfoLayer **)(this + 0x10) = pIVar2;
    *(ulong *)this = uVar3 | 1;
LAB_008ea4e4:
    memcpy(pIVar2,param_1,sVar1);
  }
  pIVar2[sVar1] = (InfoLayer)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 008ea59c to 008ea5a3 has its CatchHandler @ 008ea5d4 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pIVar2 = this + 0x19;
    this[0x18] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_008ea55c;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008ea534 to 008ea53b has its CatchHandler @ 008ea5d4 */
    pIVar2 = (InfoLayer *)operator_new(uVar3);
    *(size_t *)(this + 0x20) = sVar1;
    *(InfoLayer **)(this + 0x28) = pIVar2;
    *(ulong *)(this + 0x18) = uVar3 | 1;
  }
  memcpy(pIVar2,param_2,sVar1);
LAB_008ea55c:
  pIVar2[sVar1] = (InfoLayer)0x0;
  *(DensityMapEntity **)(this + 0x38) = param_4;
  this[0x30] = (InfoLayer)param_3;
                    /* try { // try from 008ea570 to 008ea577 has its CatchHandler @ 008ea5a4 */
  std::__ndk1::vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>::
  vector((vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>> *)
         (this + 0x40),param_5);
  return;
}


