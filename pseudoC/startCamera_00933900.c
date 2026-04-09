// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startCamera
// Entry Point: 00933900
// Size: 368 bytes
// Signature: undefined __cdecl startCamera(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startCamera(void*, char const*, char const**) */

void I3DSceneGraphFactory::startCamera(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  byte bVar2;
  char *pcVar3;
  Camera *this;
  long *plVar4;
  float fVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)ExpatUtil::getAttr("name",param_3);
  if (pcVar3 != (char *)0x0) {
    local_58 = 0.1;
    local_54 = 60.0;
    local_5c = 1000.0;
    local_50 = param_3;
    ExpatUtil::getFloatAttr("fov",&local_54,param_3);
    ExpatUtil::getFloatAttr("nearClip",&local_58,param_3);
    ExpatUtil::getFloatAttr("farClip",&local_5c,param_3);
    bVar2 = ExpatUtil::getBoolAttrRet("orthographic",false,param_3);
    local_60 = 1.0;
    ExpatUtil::getFloatAttr("orthographicHeight",&local_60,param_3);
    this = (Camera *)operator_new(0x170);
                    /* try { // try from 009339e0 to 009339ff has its CatchHandler @ 00933a70 */
    fVar5 = (float)MathUtil::degreeToRadian(local_54);
    Camera::Camera(this,pcVar3,fVar5,local_58,local_5c,(bool)(bVar2 & 1),local_60,0);
    readTransformGroup((I3DReader *)&local_50,(I3DLoad *)param_1,(TransformGroup *)this,false,false,
                       true,false);
    plVar4 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
    (**(code **)(*plVar4 + 0x18))(plVar4,this,0xffffffff);
    *(Camera **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


