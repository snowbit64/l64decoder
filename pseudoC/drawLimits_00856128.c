// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawLimits
// Entry Point: 00856128
// Size: 4 bytes
// Signature: undefined __cdecl drawLimits(Matrix4x4 * param_1, Vector3 * param_2, float param_3, DeferredDebugRenderer * param_4)


/* CCDIKSolverUtil::Joint::drawLimits(Matrix4x4 const&, Vector3 const&, float,
   DeferredDebugRenderer*) const */

void CCDIKSolverUtil::Joint::drawLimits
               (Matrix4x4 *param_1,Vector3 *param_2,float param_3,DeferredDebugRenderer *param_4)

{
  DeferredDebugRenderer *in_x3;
  
  JointLimits::draw((JointLimits *)param_1,(Matrix4x4 *)param_2,(Vector3 *)param_4,param_3,in_x3);
  return;
}


