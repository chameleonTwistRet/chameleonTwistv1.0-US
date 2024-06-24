#ifndef FUNCTIONS_US_H
#define FUNCTIONS_US_H

f32 _nsqrtf(f32);
f32 CalculateAngleOfVector(f32 x, f32 y);

void func_80030AEC(Actor*);
void Actors_Tick(void);


s32 IsRoomObjInvalid(RoomObject* obj);
s32 GetRoomObjCount(RoomObject* obj);
s32 IsRoomActInvalid(RoomActor* actor);
s32 GetRoomActCount(RoomActor* actor);
s32 IsCollectableInvalid(Collectable* collectable);
s32 GetCollectableCount(Collectable* collectable);
s32 IsRoomInvalid(RoomInstance* room);
s32 GetRoomCount(RoomInstance* room);
s32 IsSpriteActInvalid(SpriteActor* sprite);
s32 GetSpriteActCount(SpriteActor* sprite);


void ComputeBoundingBoxFromRects(Rect3D* rectA, Rect3D* rectB, Rect3D* rectOut);
void AdjustRectToVec3(Rect3D* r, Vec3f vec);
void Rect_Expand(Rect3D* r, f32 s);
void OrderRectBounds(Rect3D *rect);
s32 IfRectsIntersect(Rect3D* rectA, Rect3D* rectB);
s32 IsPointInRect(Vec3f point, Rect3D* rect);
void CalculateBoundingRectFromVectors(Vec3f vecA, Vec3f vecB, Rect3D* rect);


void Controller_Zero(ContMain* cont);

#endif
