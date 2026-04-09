// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~WebImageOverlay
// Entry Point: 0086f740
// Size: 248 bytes
// Signature: undefined __thiscall ~WebImageOverlay(WebImageOverlay * this)


/* WebImageOverlay::~WebImageOverlay() */

void __thiscall WebImageOverlay::~WebImageOverlay(WebImageOverlay *this)

{
  int iVar1;
  ResourceManager *this_00;
  WebImageOverlay *pWVar2;
  
  *(undefined ***)this = &PTR__WebImageOverlay_00fdc078;
  if (*(long *)(this + 0x90) != 0) {
                    /* try { // try from 0086f76c to 0086f78b has its CatchHandler @ 0086f84c */
    Overlay::notifyDeletedTexture
              ((Overlay *)this,*(ITextureObject **)(*(long *)(this + 0x90) + 0x68));
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x90));
  Overlay::notifyDeletedTexture((Overlay *)this,*(ITextureObject **)(this + 0x98));
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  if (((WebResourceManager::getInstance()::me & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&WebResourceManager::getInstance()::me), iVar1 != 0)) {
                    /* try { // try from 0086f800 to 0086f80b has its CatchHandler @ 0086f838 */
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
                    /* try { // try from 0086f7c4 to 0086f7cf has its CatchHandler @ 0086f84c */
  WebResourceManager::unpinUrl
            ((WebResourceManager *)WebResourceManager::getInstance()::me,(char *)pWVar2);
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  Overlay::~Overlay((Overlay *)this);
  return;
}


