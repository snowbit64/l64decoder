// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 00997890
// Size: 864 bytes
// Signature: undefined __thiscall render(Bt2PhysicsStats * this, SharedRenderArgs * param_1, uint param_2)


/* Bt2PhysicsStats::render(SharedRenderArgs const&, unsigned int) */

void __thiscall
Bt2PhysicsStats::render(Bt2PhysicsStats *this,SharedRenderArgs *param_1,uint param_2)

{
  long lVar1;
  FontOverlayRenderer *this_00;
  Bt2PhysicsStats *pBVar2;
  float fVar3;
  float fVar4;
  char acStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0xb] != (Bt2PhysicsStats)0x0) {
    FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(param_1 + 8),false);
    FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(param_1 + 8),1.0,1.0,1.0,1.0);
    FUN_009974d4(acStack_c8,0x80,"Physics Stats Page %u\n",param_2 + 1);
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)(param_1 + 8),0.03,0.94,0.02,0,acStack_c8);
    pBVar2 = this + 0x11;
    if (((byte)this[0x10] & 1) != 0) {
      pBVar2 = *(Bt2PhysicsStats **)(this + 0x20);
    }
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)(param_1 + 8),0.03,0.9,0.02,0,(char *)pBVar2);
    if (param_2 == 0) {
      pBVar2 = this + 0x71;
      if (((byte)this[0x70] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0x80);
      }
      fVar4 = 0.74;
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.03,0.74,0.02,0,(char *)pBVar2);
      FontOverlayRenderer::setAlignment(*(FontOverlayRenderer **)(param_1 + 8),2);
      pBVar2 = this + 0x89;
      if (((byte)this[0x88] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0x98);
      }
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.54,0.74,0.02,0,(char *)pBVar2);
      pBVar2 = this + 0xa1;
      if (((byte)this[0xa0] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0xb0);
      }
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.6,0.74,0.02,0,(char *)pBVar2);
      pBVar2 = this + 0xb9;
      if (((byte)this[0xb8] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 200);
      }
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.66,0.74,0.02,0,(char *)pBVar2);
      pBVar2 = this + 0xd1;
      if (((byte)this[0xd0] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0xe0);
      }
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.72,0.74,0.02,0,(char *)pBVar2);
      pBVar2 = this + 0xe9;
      if (((byte)this[0xe8] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0xf8);
      }
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.78,0.74,0.02,0,(char *)pBVar2);
      this_00 = *(FontOverlayRenderer **)(param_1 + 8);
      pBVar2 = this + 0x101;
      if (((byte)this[0x100] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0x110);
      }
      fVar3 = 0.84;
    }
    else {
      pBVar2 = this + 0x29;
      if (((byte)this[0x28] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0x38);
      }
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.03,0.74,0.02,0,(char *)pBVar2);
      pBVar2 = this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0x50);
      }
      fVar4 = 0.9;
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(param_1 + 8),0.35,0.9,0.02,0,(char *)pBVar2);
      this_00 = *(FontOverlayRenderer **)(param_1 + 8);
      pBVar2 = this + 0x59;
      if (((byte)this[0x58] & 1) != 0) {
        pBVar2 = *(Bt2PhysicsStats **)(this + 0x68);
      }
      fVar3 = 0.3;
    }
    FontOverlayRenderer::xyprintf(this_00,fVar3,fVar4,0.02,0,(char *)pBVar2);
    FontOverlayRenderer::setAlignment(*(FontOverlayRenderer **)(param_1 + 8),0);
  }
  this[10] = (Bt2PhysicsStats)0x1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


