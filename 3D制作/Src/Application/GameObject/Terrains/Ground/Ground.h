#pragma once

class Ground : public KdGameObject
{
public:
	Ground() { Init(); }
	~Ground() {}

	void Update()	override;
	void DrawLit()	override;

private:
	void Init()		override;

	std::shared_ptr<KdModelWork> m_spModel;
};

