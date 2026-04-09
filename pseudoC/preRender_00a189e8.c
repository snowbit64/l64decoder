// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 00a189e8
// Size: 28 bytes
// Signature: undefined preRender(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderList::preRender() */

void RenderList::preRender(void)

{
  long in_x0;
  
  if (*(LightList **)(in_x0 + 0x30) != (LightList *)0x0) {
    LightList::finalizeLightList(*(LightList **)(in_x0 + 0x30),**(IRenderDevice ***)(in_x0 + 0x20));
    return;
  }
  return;
}


