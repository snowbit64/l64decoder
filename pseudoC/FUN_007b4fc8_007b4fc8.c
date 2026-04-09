// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4fc8
// Entry Point: 007b4fc8
// Size: 368 bytes
// Signature: undefined FUN_007b4fc8(void)


ImageOverlay * FUN_007b4fc8(char **param_1)

{
  long lVar1;
  size_t __n;
  Texture *pTVar2;
  ImageOverlay *this;
  char *pcVar3;
  char *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = *param_1;
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007b5054;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar3,__n);
LAB_007b5054:
  __dest[__n] = '\0';
                    /* try { // try from 007b5058 to 007b5063 has its CatchHandler @ 007b5148 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
                    /* try { // try from 007b5078 to 007b508f has its CatchHandler @ 007b514c */
  pTVar2 = (Texture *)TextureUtil::loadDefaultImageOverlayTexture(pcVar3,true);
  if (pTVar2 == (Texture *)0x0) {
    this = (ImageOverlay *)0x0;
  }
  else {
    this = (ImageOverlay *)operator_new(0x90);
    pcVar3 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar3 = local_50;
    }
                    /* try { // try from 007b50a4 to 007b50df has its CatchHandler @ 007b5138 */
    ImageOverlay::ImageOverlay
              (this,pcVar3,pTVar2,(ISamplerObject *)0x0,0.1,0.1,0.2,0.2,0.0,0.0,1.0,1.0);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


