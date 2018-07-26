local aitest =
{
	Properties = {
		MoveToEntity = {default=EntityId(), description="Entity to move to."},
	}
}

function aitest:OnActivate()
	self.requestId = NavigationComponentRequestBus.Event.FindPathToEntity(self.entityId, self.Properties.MoveToEntity)  
end

return aitest;