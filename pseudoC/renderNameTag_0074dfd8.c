// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderNameTag
// Entry Point: 0074dfd8
// Size: 308 bytes
// Signature: undefined __thiscall renderNameTag(DebugMarkerManager * this, Matrix4x4 * param_1, uchar param_2, float param_3, float param_4, char * param_5)


/* DebugMarkerManager::renderNameTag(Matrix4x4 const&, unsigned char, float, float, char const*) */

void __thiscall
DebugMarkerManager::renderNameTag
          (DebugMarkerManager *this,Matrix4x4 *param_1,uchar param_2,float param_3,float param_4,
          char *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  uint local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  Renderer::projectClipCoords(*(Renderer **)(this + 8),(Vector3 *)&local_58,(Vector3 *)&local_68);
  if (0.0 <= local_60) {
    local_6c = 0;
    fVar3 = (float)FontOverlayRenderer::getTextWidth
                             (*(FontOverlayRenderer **)(this + 0x10),param_3,false,0,param_5);
    fVar4 = (float)FontOverlayRenderer::getTextHeight
                             (*(FontOverlayRenderer **)(this + 0x10),param_3,false,0,param_5,
                              &local_6c);
    lVar1 = (ulong)param_2 * 0xc;
    local_68 = CONCAT44((float)((ulong)local_68 >> 0x20) + fVar4 * -0.5,
                        (float)local_68 + fVar3 * -0.5);
    FontOverlayRenderer::setColor
              (*(FontOverlayRenderer **)(this + 0x10),*(float *)(s_colors + lVar1),
               *(float *)(s_colors + lVar1 + 4),*(float *)(s_colors + lVar1 + 8),param_4);
    FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(this + 0x10),true);
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)(this + 0x10),(float)local_68,local_68._4_4_,param_3,0,
               param_5);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


