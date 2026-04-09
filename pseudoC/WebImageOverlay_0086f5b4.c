// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WebImageOverlay
// Entry Point: 0086f5b4
// Size: 332 bytes
// Signature: undefined __thiscall WebImageOverlay(WebImageOverlay * this, char * param_1, Texture * param_2, ISamplerObject * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)


/* WebImageOverlay::WebImageOverlay(char const*, Texture*, ISamplerObject*, float, float, float,
   float, float, float, float, float) */

void __thiscall
WebImageOverlay::WebImageOverlay
          (WebImageOverlay *this,char *param_1,Texture *param_2,ISamplerObject *param_3,
          float param_4,float param_5,float param_6,float param_7,float param_8,float param_9,
          float param_10,float param_11)

{
  int iVar1;
  size_t __n;
  WebImageOverlay *pWVar2;
  ulong uVar3;
  
  Overlay::Overlay((Overlay *)this,param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
  *(undefined ***)this = &PTR__WebImageOverlay_00fdc078;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0086f6b0 to 0086f6b7 has its CatchHandler @ 0086f72c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pWVar2 = this + 0x79;
    this[0x78] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_0086f654;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0086f62c to 0086f633 has its CatchHandler @ 0086f72c */
    pWVar2 = (WebImageOverlay *)operator_new(uVar3);
    *(size_t *)(this + 0x80) = __n;
    *(WebImageOverlay **)(this + 0x88) = pWVar2;
    *(ulong *)(this + 0x78) = uVar3 | 1;
  }
  memcpy(pWVar2,param_1,__n);
LAB_0086f654:
  pWVar2[__n] = (WebImageOverlay)0x0;
  *(Texture **)(this + 0x90) = param_2;
  *(undefined8 *)(this + 0x98) = 0;
  *(ISamplerObject **)(this + 0xa0) = param_3;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x400000000;
  if (((WebResourceManager::getInstance()::me & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&WebResourceManager::getInstance()::me), iVar1 != 0)) {
                    /* try { // try from 0086f6c8 to 0086f6d3 has its CatchHandler @ 0086f700 */
    WebResourceManager::WebResourceManager
              ((WebResourceManager *)WebResourceManager::getInstance()::me);
    __cxa_atexit(WebResourceManager::~WebResourceManager,WebResourceManager::getInstance()::me,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&WebResourceManager::getInstance()::me);
  }
  pWVar2 = *(WebImageOverlay **)(this + 0x88);
  if (((byte)this[0x78] & 1) == 0) {
    pWVar2 = this + 0x79;
  }
                    /* try { // try from 0086f68c to 0086f697 has its CatchHandler @ 0086f714 */
  WebResourceManager::pinUrl
            ((WebResourceManager *)WebResourceManager::getInstance()::me,(char *)pWVar2);
  return;
}


