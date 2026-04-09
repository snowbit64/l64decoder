// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ImageOverlay
// Entry Point: 006f33c0
// Size: 100 bytes
// Signature: undefined __thiscall ~ImageOverlay(ImageOverlay * this)


/* ImageOverlay::~ImageOverlay() */

void __thiscall ImageOverlay::~ImageOverlay(ImageOverlay *this)

{
  ResourceManager *this_00;
  
  *(undefined ***)this = &PTR__ImageOverlay_00fd97b0;
  if (*(long *)(this + 0x78) == 0) {
    if (*(ITextureObject **)(this + 0x80) != (ITextureObject *)0x0) {
      Overlay::notifyDeletedTexture((Overlay *)this,*(ITextureObject **)(this + 0x80));
    }
  }
  else {
                    /* try { // try from 006f33ec to 006f3413 has its CatchHandler @ 006f3424 */
    Overlay::notifyDeletedTexture
              ((Overlay *)this,*(ITextureObject **)(*(long *)(this + 0x78) + 0x68));
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,*(Resource **)(this + 0x78));
  }
  Overlay::~Overlay((Overlay *)this);
  return;
}


