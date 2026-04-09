// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCollisionObject
// Entry Point: 00f33104
// Size: 4 bytes
// Signature: undefined __cdecl addCollisionObject(btCollisionObject * param_1, short param_2, short param_3)


/* btDiscreteDynamicsWorld::addCollisionObject(btCollisionObject*, short, short) */

void btDiscreteDynamicsWorld::addCollisionObject
               (btCollisionObject *param_1,short param_2,short param_3)

{
  short in_w3;
  
  btCollisionWorld::addCollisionObject
            ((btCollisionWorld *)param_1,(btCollisionObject *)(ulong)(ushort)param_2,param_3,in_w3);
  return;
}


