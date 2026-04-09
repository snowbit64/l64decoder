// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersect
// Entry Point: 0074d00c
// Size: 576 bytes
// Signature: undefined __cdecl intersect(TransformGroup * param_1, Vector3 * param_2, Vector3 * param_3, Vector2 * param_4, float * param_5)


/* DebugMarkerManager::intersect(TransformGroup*, Vector3 const&, Vector3 const&, Vector2 const&,
   float&) */

byte DebugMarkerManager::intersect
               (TransformGroup *param_1,Vector3 *param_2,Vector3 *param_3,Vector2 *param_4,
               float *param_5)

{
  TransformGroup TVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  FontOverlayRenderer *this;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  local_68 = *(float *)(param_1 + 0xe8);
  fStack_64 = *(float *)(param_1 + 0xec);
  local_60 = *(float *)(param_1 + 0xf0);
  uVar6 = NEON_fmadd(fStack_64 - *(float *)(param_2 + 4),fStack_64 - *(float *)(param_2 + 4),
                     (local_68 - *(float *)param_2) * (local_68 - *(float *)param_2));
  fVar7 = (float)NEON_fmadd(local_60 - *(float *)(param_2 + 8),local_60 - *(float *)(param_2 + 8),
                            uVar6);
  fVar8 = 1.0;
  fVar7 = SQRT(fVar7);
  *param_5 = fVar7;
  TVar1 = param_1[300];
  if ((byte)TVar1 - 2 < 2) {
    if (10.0 <= fVar7) {
      if (40.0 < fVar7) {
        fVar8 = fVar7 / 40.0;
      }
    }
    else {
      if (fVar7 <= 0.1) {
        fVar7 = 0.1;
      }
      fVar8 = fVar7 / 10.0;
    }
  }
  else if ((byte)TVar1 == 1) {
    if (10.0 <= fVar7) {
      if (fVar7 <= 40.0) {
        fVar7 = (float)NEON_fmadd((fVar7 + -10.0) / 30.0,0xbca3d70a,0x3cf5c28f);
      }
      else {
        fVar7 = 0.01;
      }
    }
    else {
      fVar7 = 0.03;
    }
    lVar4 = EngineManager::getInstance();
    Renderer::projectClipCoords
              (*(Renderer **)(lVar4 + 0xb8),(Vector3 *)&local_68,(Vector3 *)&local_78);
    lVar4 = EngineManager::getInstance();
    pcVar5 = *(char **)(param_1 + 8);
    this = *(FontOverlayRenderer **)(lVar4 + 0xf8);
    local_7c = 0.0;
    fVar8 = (float)FontOverlayRenderer::getTextWidth(this,fVar7,false,0,pcVar5);
    fVar7 = (float)FontOverlayRenderer::getTextHeight(this,fVar7,false,0,pcVar5,(uint *)&local_7c);
    bVar3 = 0;
    if (ABS(local_78 - *(float *)param_4) < fVar8 * 0.5) {
      bVar3 = ABS(local_74 - *(float *)(param_4 + 4)) < fVar7 * 0.5;
    }
    goto LAB_0074d218;
  }
  if ((TVar1 == (TransformGroup)0x2) || (TVar1 == (TransformGroup)0x3)) {
    bVar3 = MathUtil::raySphereIntersect
                      (param_2,param_3,(Vector3 *)&local_68,fVar8 * 0.5,&local_78,&local_7c);
  }
  else {
    bVar3 = 0;
  }
LAB_0074d218:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


