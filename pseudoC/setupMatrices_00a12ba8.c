// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupMatrices
// Entry Point: 00a12ba8
// Size: 212 bytes
// Signature: undefined __cdecl setupMatrices(TransformArgs * param_1, Camera * param_2, IDisplay * param_3, uint param_4, float param_5)


/* Renderer::setupMatrices(TransformArgs&, Camera const*, IDisplay const*, unsigned int, float) */

void Renderer::setupMatrices
               (TransformArgs *param_1,Camera *param_2,IDisplay *param_3,uint param_4,float param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_e0;
  float local_dc;
  Matrix4x4 aMStack_d8 [64];
  Matrix4x4 aMStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)Camera::getNearClip();
  local_dc = fVar2;
  fVar3 = (float)Camera::getFarClip();
  local_e0 = fVar3;
  generateMatrices(param_2,param_3,param_4,param_5,&local_dc,&local_e0,aMStack_98,aMStack_d8);
  TransformArgs::setupInv(param_1,aMStack_98,aMStack_d8,fVar2,fVar3,(Vector3 *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


