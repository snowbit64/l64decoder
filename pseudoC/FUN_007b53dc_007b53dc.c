// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b53dc
// Entry Point: 007b53dc
// Size: 360 bytes
// Signature: undefined FUN_007b53dc(void)


WebImageOverlay * FUN_007b53dc(char **param_1)

{
  long lVar1;
  size_t __n;
  Texture *pTVar2;
  WebImageOverlay *this;
  char *pcVar3;
  char *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = param_1[2];
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007b546c;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar3,__n);
LAB_007b546c:
  __dest[__n] = '\0';
                    /* try { // try from 007b5470 to 007b547b has its CatchHandler @ 007b5554 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
                    /* try { // try from 007b5490 to 007b54a7 has its CatchHandler @ 007b5558 */
  pTVar2 = (Texture *)TextureUtil::loadDefaultImageOverlayTexture(pcVar3,true);
  if (pTVar2 == (Texture *)0x0) {
    this = (WebImageOverlay *)0x0;
  }
  else {
    this = (WebImageOverlay *)operator_new(0xa8);
                    /* try { // try from 007b54b0 to 007b54eb has its CatchHandler @ 007b5544 */
    WebImageOverlay::WebImageOverlay
              (this,*param_1,pTVar2,(ISamplerObject *)0x0,0.1,0.1,0.2,0.2,0.0,0.0,1.0,1.0);
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


