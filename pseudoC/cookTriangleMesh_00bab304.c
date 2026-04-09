// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cookTriangleMesh
// Entry Point: 00bab304
// Size: 20 bytes
// Signature: undefined __thiscall cookTriangleMesh(Bt2PhysicsContextManager * this, IndexedTriangleSet * param_1, bool param_2, Vector3 * param_3, Bt2PhysicsUserMemoryStream * param_4)


/* Bt2PhysicsContextManager::cookTriangleMesh(IndexedTriangleSet*, bool, Vector3 const&,
   Bt2PhysicsUserMemoryStream&) */

void __thiscall
Bt2PhysicsContextManager::cookTriangleMesh
          (Bt2PhysicsContextManager *this,IndexedTriangleSet *param_1,bool param_2,Vector3 *param_3,
          Bt2PhysicsUserMemoryStream *param_4)

{
  Bt2PhysicsCookingUtil::cookTriangleMesh(param_1,param_2,param_3,param_4);
  return;
}


