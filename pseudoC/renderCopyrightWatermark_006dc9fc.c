// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderCopyrightWatermark
// Entry Point: 006dc9fc
// Size: 324 bytes
// Signature: undefined renderCopyrightWatermark(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::renderCopyrightWatermark() */

void EngineApplication::renderCopyrightWatermark(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  FontOverlayRenderer *this;
  char acStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x0 + 0x1c2) != '\0') {
    lVar2 = EngineManager::getInstance();
    this = *(FontOverlayRenderer **)(lVar2 + 0xf8);
    FontOverlayRenderer::setBold(this,true);
    FontOverlayRenderer::setAlignment(this,1);
    FUN_006dcb40(acStack_138,0x100,"(c) 2003-%s, GIANTS Software",&DAT_004da759);
    __strcat_chk(acStack_138," (www.giants-software.com)",0x100);
    FontOverlayRenderer::setColor(this,0.0,0.0,0.0,0.75);
    FontOverlayRenderer::xyprintf(this,0.5,0.0475,0.024,0,acStack_138);
    FontOverlayRenderer::setColor(this,1.0,1.0,1.0,1.0);
    FontOverlayRenderer::xyprintf(this,0.5,0.05,0.024,0,acStack_138);
    FontOverlayRenderer::setAlignment(this,0);
    FontOverlayRenderer::setBold(this,false);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


